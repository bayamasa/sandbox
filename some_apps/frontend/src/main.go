package main

import (
	"log"
	"net/http"

	"github.com/gorilla/mux"
)

func main() {
	// ルーターのイニシャライズ
	r := mux.NewRouter()

	// ルート(エンドポイント)
	// r.HandleFunc("/api/books", getBooks).Methods("GET")
	// r.HandleFunc("/api/books/{id}", getBook).Methods("GET")
	// r.HandleFunc("/api/books", createBook).Methods("POST")
	// r.HandleFunc("/api/books/{id}", updateBook).Methods("PUT")
	// r.HandleFunc("/api/books/{id}", deleteBook).Methods("DELETE")

	log.Fatal(http.ListenAndServe(":8000", r))
}
